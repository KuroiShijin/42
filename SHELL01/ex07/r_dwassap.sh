cat /etc/passwd | grep -v "[\#]"| sed -n "n;p"|sed 's/:.*/''/g'|rev|sort -r|head -$FT_LINE2|tail +$FT_LINE1|tr '\n' ','|sed 's/,/, /'g|rev|sed 's/ ,/./'|rev|tr -d '\n'
