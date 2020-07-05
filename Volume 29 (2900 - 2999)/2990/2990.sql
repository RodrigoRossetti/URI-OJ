SELECT empregados.cpf AS "cpf", empregados.enome AS "enome", departamentos.dnome AS NULL
FROM empregados
JOIN departamentos ON departamentos.dnumero = empregados.dnumero
WHERE empregados.cpf_supervisor IS NULL
ORDER BY empregados.cpf