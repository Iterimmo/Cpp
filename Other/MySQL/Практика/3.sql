UPDATE fine f , traffic_violation t
SET f.sum_fine = t.sum_fine
WHERE f.sum_fine IS NULL AND f.violation = t.violation ;
    