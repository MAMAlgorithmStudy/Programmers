        content += "\n</details>\n\n"  # Close the last details tag

    # 순위표 추가
    most_common_names = name_count.most_common(5)  # 5등까지
    most_common_names = name_count.most_common(7)  # 7등까지
    standings = "# 🏆 Ranking\n"
    standings += "| 🥇 순위 | 👤 이름 | ✔ 횟수 |\n"
    standings += "| --- | --- | --- |\n"
            medal = "🥉 3위"
        elif i == 4:
            medal = "🏅 4위"
        else:
        elif i == 5:
            medal = "🎖️ 5위"
        
        elif i == 6:
            medal = "🎀 6위"
        elif i == 7:
            medal = "🎗 7위"
        standings += f"| {medal} | {name} | {count} |\n"

    content = HEADER + "\n" + standings + "\n" + content  # 목차 다음에 순위표 추가
