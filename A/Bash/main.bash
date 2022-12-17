#!/bin/bash
main () {
  read sticked required
  if [[ $sticked -gt $required ]];then
    echo 0
  else
    difference=$((required - sticked))
    additional=$(((difference + 10 -1)/10))
    echo $additional
  fi
}
main
exit 0

