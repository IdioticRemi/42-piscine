nbr1=`echo "$FT_NBR1" | tr "'" '0' | tr '\' '1' | tr '"' '2' | tr '?' '3' | tr '!' '4'`;
nbr2=`echo "$FT_NBR2" | tr 'm' '0' | tr 'r' '1' | tr 'd' '2' | tr 'o' '3' | tr 'c' '4'`;

nbr1=`echo "obase=10; ibase=5; $nbr1" | bc`;
nbr2=`echo "obase=10; ibase=5; $nbr2" | bc`;

res=`echo "$nbr1 + $nbr2" | bc`;

echo "obase=13; ibase=10; $res" | bc | tr '0' 'g' | tr '1' 't' | tr '2' 'a' | tr '3' 'i' | tr '4' 'o' | tr '5' ' ' | tr '6' 'l' | tr '7' 'u' | tr '8' 'S' | tr '9' 'n' | tr 'A' 'e' | tr 'B' 'm' | tr 'C' 'f';