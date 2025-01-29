import os
from urllib import parse

HEADER = """# 
# 백준 알고리즘 문제 풀이 목록

커밋될 때 마다 리드미 파일을 갱신합니다

"""

def is_gold_or_above(category):
    """
    골드 이상 문제를 판별하는 함수
    'Gold', 'Platinum', 'Diamond', 'Ruby' 카테고리는 골드 이상으로 분류
    """
    gold_categories = ["Gold", "Platinum", "Diamond", "Ruby"]
    return category in gold_categories

def main():
    content = ""
    content += HEADER
    
    directories = []
    solveds = []
    
    gold_content = {
        "Gold": "",
        "Platinum": "",
        "Diamond": "",
        "Ruby": ""
    }
    
    tier_contents = {
        "Bronze": "",
        "Silver": "",
        "Gold": "",
        "Unrated": "",
        "Platinum": "",
        "Diamond": "",
        "Ruby": ""
    }

    for root, dirs, files in os.walk("."):
        dirs.sort()
        if root == '.':
            for dir in ('.git', '.github'):
                try:
                    dirs.remove(dir)
                except ValueError:
                    pass
            continue

        category = os.path.basename(root)

        if category == 'images':
            continue
        
        directory = os.path.basename(os.path.dirname(root))
        
        if directory == '.':
            continue
            
        if directory not in directories:
            if directory in ["백준", "프로그래머스"]:
                content += "## 📚 {}\n".format(directory)
            else:
                content += "### 🚀 {}\n".format(directory)
                content += "| 문제번호 | 링크 |\n"
                content += "| ----- | ----- |\n"
            directories.append(directory)

        for file in files:
            problem_link = parse.quote(os.path.join(root, file))

            # 모든 문제는 티어별로 분류
            if category in tier_contents:
                tier_contents[category] += "|{}|[링크]({})|\n".format(file, problem_link)

                # 골드 이상 문제는 별도로 구분
                if is_gold_or_above(category):
                    gold_content[category] += "|{}|[링크]({})|\n".format(file, problem_link)

            if category not in solveds:
                solveds.append(category)

    # README.md 파일 업데이트 (골드 이상 문제만 포함)
    with open("README.md", "w") as fd:
        fd.write(content)
        fd.write("\n## 골드 이상 문제\n")

        # 골드 이상 문제들을 골드, 플래티넘, 다이아, 루비로 나눠서 출력
        for tier in ["Gold", "Platinum", "Diamond", "Ruby"]:
            if gold_content[tier]:
                fd.write(f"### {tier} 문제\n")
                fd.write("| 문제번호 | 링크 |\n")
                fd.write("| ----- | ----- |\n")
                fd.write(gold_content[tier])

    # solved_problems.md 파일에 모든 문제 티어별로 저장
    with open("solved_problems.md", "w") as fd:
        fd.write("# 풀어진 문제 목록\n")
        for tier, problems in tier_contents.items():
            if problems:  # 해당 티어에 문제가 있을 경우만 기록
                fd.write(f"## {tier} 문제\n")
                fd.write("| 문제번호 | 링크 |\n")
                fd.write("| ----- | ----- |\n")
                fd.write(problems)

if __name__ == "__main__":
    main()
