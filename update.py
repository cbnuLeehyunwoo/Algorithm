#!/usr/bin/env python

import os
from urllib import parse

# 🏆 티어별 아이콘 매핑
TIER_ICONS = {
    "루비": "❤️", "다이아몬드": "💎", "플래티넘": "🔮",
    "골드": "🏅", "실버": "🥈", "브론즈": "🥉", "unrated": "❔"
}

# 티어 우선순위 (내림차순 정렬)
TIER_ORDER = {tier: i for i, tier in enumerate(["루비", "다이아몬드", "플래티넘", "골드", "실버", "브론즈", "unrated"])}

# 📌 README 개요 (골드 이상 문제만 표시)
README_HEADER = """# 📌 백준 알고리즘 문제 풀이 목록
GitHub Actions를 사용하여 README.md를 자동 업데이트합니다.

## ✅ 현재 푼 문제 목록
골드 이상(골드, 플래티넘, 다이아몬드, 루비) 문제만 표시합니다.  
전체 문제 목록은 [📄 solved_problems.md](./solved_problems.md)에서 확인하세요!

| 티어 | 문제번호 | 링크 |
| ---- | ------ | ---- |
"""

# 📄 solved_problems.md (전체 문제 목록)
PROBLEM_HEADER = """# 📄 백준 알고리즘 문제 풀이 목록 (전체)
전체 문제 리스트입니다.  

| 티어 | 문제번호 | 링크 |
| ---- | ------ | ---- |
"""

def get_tier_priority(tier):
    """ 티어 우선순위 반환 (없으면 가장 낮은 우선순위) """
    return TIER_ORDER.get(tier, 100)

def main():
    directories = {}
    
    for root, dirs, files in os.walk("."):
        if root in ('.', './.git', './.github', './images'):
            continue
        
        tier = os.path.basename(root)  # 현재 폴더의 티어
        parent_dir = os.path.basename(os.path.dirname(root))  # 상위 폴더 (ex: 백준, 프로그래머스)
        
        if parent_dir == '.':
            continue

        if parent_dir not in directories:
            directories[parent_dir] = {}

        if tier not in directories[parent_dir]:
            directories[parent_dir][tier] = []

        for file in files:
            problem_link = parse.quote(os.path.join(root, file))
            directories[parent_dir][tier].append((tier, problem_link))

    # 📌 README.md 생성 (골드 이상 문제만 표시)
    with open("README.md", "w") as readme:
        readme.write(README_HEADER)
        
        for site, tiers in directories.items():
            sorted_tiers = sorted(tiers.keys(), key=get_tier_priority)
            
            for tier in sorted_tiers:
                if tier not in ["루비", "다이아몬드", "플래티넘", "골드"]:  # 📌 실버 이하 문제는 제외
                    continue
                
                for problem in sorted(tiers[tier]):  # 문제번호 순 정렬
                    tier_icon = TIER_ICONS.get(problem[0], "❔")
                    readme.write(f"| {tier_icon} {problem[0]} | [문제]({problem[1]}) |\n")

    # 📄 solved_problems.md 생성 (전체 문제 목록)
    with open("solved_problems.md", "w") as details:
        details.write(PROBLEM_HEADER)
        
        for site, tiers in directories.items():
            details.write(f"\n## 📚 {site}\n")
            
            sorted_tiers = sorted(tiers.keys(), key=get_tier_priority)
            
            for tier in sorted_tiers:
                for problem in sorted(tiers[tier]):
                    tier_icon = TIER_ICONS.get(problem[0], "❔")
                    details.write(f"| {tier_icon} {problem[0]} | [문제]({problem[1]}) |\n")

if __name__ == "__main__":
    main()
