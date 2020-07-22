tn :: Int -> Int -> Int
tn fac n = fac * n' * (n' + 1) `div` 2 where n' = n `div` fac

three_or_five :: IO ()
three_or_five = do
    putStrLn "Please type the range:"
    n <- readLn
    -- or t_temp <- getLine --
    let m = n - 1
    print $ tn 3 m + tn 5 m - tn 15 m