CREATE TABLE banks (
    id INT PRIMARY KEY,
    name VARCHAR(18),
    location VARCHAR(18),
    swiftCode VARCHAR(8),
    dateCreated DATE
);


INSERT INTO banks (id, name, location, swiftCode, dateCreated) VALUES (1, 'Bank of Example', 'Example City', 'EX123456', '2023-10-01');