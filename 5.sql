select DISTINCT name 
FROM (
  SELECT name from Dogs
  UNION ALL
  SELECT name from cats
  );