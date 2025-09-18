-- إنشاء جدول customer
CREATE TABLE customer (
  customer_id INT PRIMARY KEY,
  first_name VARCHAR(50),
  last_name VARCHAR(50),
  address VARCHAR(100)
);

-- 1️⃣ INSERT: إدخال بيانات
INSERT INTO customer (customer_id, first_name, last_name, address) VALUES
(1, "Ali", "Omar", "Cairo"),
(2, "Sara", "Hassan", "Alex"),
(3, "Khalid", "Mohammed", "Giza"),
(4, "Mona", "Ibrahim", "Luxor");

-- 2️⃣ SELECT: عرض البيانات
SELECT * FROM customer;

-- SELECT مع شروط
SELECT * FROM customer WHERE address = "Cairo";

-- 3️⃣ UPDATE: تعديل بيانات
UPDATE customer
SET address = "Mansoura"
WHERE customer_id = 2;

-- 4️⃣ DELETE: حذف بيانات
DELETE FROM customer
WHERE customer_id = 3;

-- 5️⃣ SELECT: عرض البيانات بعد التغييرات
SELECT * FROM customer;