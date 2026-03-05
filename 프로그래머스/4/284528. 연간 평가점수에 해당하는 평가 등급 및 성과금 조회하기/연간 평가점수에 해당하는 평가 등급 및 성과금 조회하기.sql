WITH EMP_GRADE AS (
    SELECT EMP_NO, (CASE
                    WHEN AVG(SCORE) >= 96 THEN 'S'
                    WHEN AVG(SCORE) >= 90 THEN 'A'
                    WHEN AVG(SCORE) >= 80 THEN 'B'
                    ELSE 'C'
                    END) AS GRADE
    FROM HR_GRADE
    GROUP BY EMP_NO
)

SELECT E.EMP_NO, EMP_NAME, GRADE, (SAL * (CASE GRADE
                                          WHEN 'S' THEN 0.2
                                          WHEN 'A' THEN 0.15
                                          WHEN 'B' THEN 0.1
                                          ELSE 0
                                          END)) AS BONUS
FROM HR_EMPLOYEES AS E
JOIN EMP_GRADE AS G
ON E.EMP_NO = G.EMP_NO
ORDER BY EMP_NO