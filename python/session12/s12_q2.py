def format_follower_count(count):
    if count >= 1_000_000:
        return f"{count / 1_000_000:.1f}M"
    elif count >= 1_000:
        return f"{count / 1_000:.1f}K"
    else:
        return str(count)

# Test examples
print(format_follower_count(950))       # 950
print(format_follower_count(1500))      # 1.5K
print(format_follower_count(1200000))   # 1.2M
print(format_follower_count(25000000))  # 25.0M