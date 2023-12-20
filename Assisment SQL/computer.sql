-- phpMyAdmin SQL Dump
-- version 4.9.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 13, 2023 at 04:32 PM
-- Server version: 10.4.10-MariaDB
-- PHP Version: 7.1.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `computer`
--

-- --------------------------------------------------------

--
-- Table structure for table `computer`
--

CREATE TABLE `computer` (
  `PRO_ID` int(50) DEFAULT NULL,
  `PRO_NAME` varchar(40) DEFAULT NULL,
  `PRO_PRICE` int(20) DEFAULT NULL,
  `PRO_COM` int(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `computer`
--

INSERT INTO `computer` (`PRO_ID`, `PRO_NAME`, `PRO_PRICE`, `PRO_COM`) VALUES
(101, 'Mother Board', 3200, 15),
(102, 'Key Board', 450, 16),
(103, 'ZIP drive', 250, 14),
(104, 'Speaker', 550, 16),
(105, 'Monitor', 5000, 11),
(106, 'DVD driver', 900, 12),
(107, 'CD driver', 800, 12),
(108, 'printer', 2600, 13),
(109, 'Refill cartridge', 350, 13),
(110, 'Mouse', 250, 12);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
