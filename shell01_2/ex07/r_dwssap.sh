cat /etc/passwd | awk '!/^#/' | awk 'NR > 1 && NR % 2 == 1'| awk -v ft_line1="$FT_LINE1" -v ft_line2="$FT_LINE2" 'NR >= ft_line1 && NR <= ft_line2' | awk -F ':' '{print $1}' | rev | sort -r | tr '\n' ', ' | sed 's/.$/./' | tr -d "\n"