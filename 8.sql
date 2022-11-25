select DISTINCT name 
FROM (
  SELECT name from dogs
  UNION ALL
  SELECT name from cats
  );