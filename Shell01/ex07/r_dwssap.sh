cat /etc/passwd | \
# Remove all comments
    grep -v '#' | \
# Take one line out of two, starting at the second line
    sed -n 'n;p' | \
# Take only the text before the first ":" (get only the login)
    sed 's/:.*//' | \
# Reverse every line
    rev | \
# Sort by reverse alphabetical order
    sort -r | \
# Take only lines between line "$FT_LINE1" excluded up to line "$FT_LINE2" included
    tail -n "+$(($FT_LINE1))" | \
    head -n "$(($FT_LINE2-$FT_LINE1+1))" | \
# Lines to one single line sep by spaces
    tr '\n' ' ' | \
# Replace " " with ", "
    sed 's/ /, /g' | \
# Replace the last ", " and replace with "."
    sed 's/, $/./g' | \
# Moulinette I hate you
    tr -d '\n'