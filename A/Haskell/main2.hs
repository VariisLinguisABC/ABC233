str2Int str = do {
  read str :: Int
}

str2IntList :: String -> [Int]
str2IntList str = do {
  map str2Int (words str)
}

answer x = do  {
  if x > 0 then (countUp x 10)
  else 0;
}

countUp a b = do {
  if a `rem` b == 0 then a `quot` b
  else a `quot` b + 1
}

inputDiff a b = do {
  a - b
}

main = do {
  [sticked,required] <- str2IntList <$> getLine;
  
  diff' <- return (inputDiff required sticked);
  ans <- return(answer diff');
  print ans;
}


