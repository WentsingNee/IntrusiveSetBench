
a=(./free_bsd_outside ./free_bsd ./boost_intrusive ./std_set)
repeat_time=10
time=(0 0 0 0)
for ((i = 0; i < ${repeat_time}; i++))
do
  for ((j = 0; j < ${#a[*]}; j++))
  do
    t=$(${a[j]})
    echo ${t}

    time[j]=$(echo "${time[j]} + ${t}" | bc)
  done
done

echo -e "\n\n\n"

for ((j = 0; j < ${#a[*]}; j++))
do
  echo "${a[j]}" avg:
  echo "scale=5; ${time[j]} / ${repeat_time}" | bc
done
