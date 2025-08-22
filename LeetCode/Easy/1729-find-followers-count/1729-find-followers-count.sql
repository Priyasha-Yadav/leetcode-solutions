# Write your MySQL query statement below
SELECT user_id, COUNT(FOLLOWER_ID) AS followers_count FROM FOLLOWERS
GROUP BY user_id
ORDER BY user_id;