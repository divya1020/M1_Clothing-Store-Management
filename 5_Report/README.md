## Introduction


Clothing store management system is specially designed for the purpose of adding clothing item’s detail. The system elaborates the basic concept for storing and generating item’s detail. In this system, staff can sign up as a system admin, He/she can have full access to the system for maintaining daily records. The whole project is designed in C language and different variables and strings have been used for the development of this project.


## Requirements


### The Requirements consists of two levels :
### High Level  Requirements


| HLR | Description     |         Category    | Status  |
| :-------- | :------- | :------------------------- | :----------------- |
| HLR_1| Calculations | Technical | IMPLEMENTED |
|HLR_2|  Discount Option | Technical | IMPLEMENTED|
| HLR_3 | Generate Invoice | Technical| IMPLEMENTED |
|HLR_4 | Add items | Technical| IMPLEMENTED|
|HLR_5 | Search items| Technical| IMPLEMENTED|
|HLR_6 |Edit item | Technical| IMPLEMENTED|


## Low Level  Requirements


| LLR | Description     | Category                       | Status |
| :-------- | :------- | :-------------------------------- |:--------------|
| LLR_1      | Get data from standard input | Technical | IMPLEMENTED |
|LLR_2 | Main menu should consist 7 options: 1.Add items, 2.Delete items, 3.Search, 4. View 5.Edit 6.Calculate Bill 7.Exit| Technical|IMPLEMENTED|
|LLR_3 | Admin will view the item | Technical| IMPLEMENTED|
|LLR_4| Admin will delete the items | Technical| IMPLEMENTED|
|LLR_5 | Admin will exit the item | Technical| IMPLEMENTED| 



## 4W's 1-H


### What:
- Clothing store management system is specially designed for the purpose of adding clothing item’s detail.

### Why:
- It is used to do complex calculations and to do the work quickly

### Where:
- User can access this application using any C compiler.

### Who:
- Anyone can use this by accessing its main menu and need to choose there required field of choice and to get there desired output.

### How:
- Clothing Store Management is an application that will take input from user such as customer details and item details and then it will do all the calculations    internally that are required and generate an invoice with customer name and total amount.



![5W 1H](https://user-images.githubusercontent.com/88372627/161411849-1f280a83-fb12-4789-9f14-7a1ec398fb8e.png)



## SWOT analysis

### Strengths 
- Saves Time
- Automatic Calculations
- No chance of errors in calculations of inputs are right
- Feature to add Discount

### Weakness
- Needs graphical user interface.

### Opportunities
- Can be implemented in any type of store or shops

### Threats
- Don’t use any alphabets or any special characters while entering code of items.
- Other Similar Applications


![swot  analysis](https://user-images.githubusercontent.com/88372627/161411901-053c5cd5-aca5-4adc-b31b-d7f0c3138b04.png)

## Architecture

### COMPONENT DIAGRAM

![COMPONENT DIAGRAM](https://user-images.githubusercontent.com/88372627/161416516-f117c099-3465-489b-b23b-aea08b12fde1.png)


### Usecase behavioural diagram

![Usecase behavioural diagram](https://user-images.githubusercontent.com/88372627/161423348-7fbaf47e-d68a-4b7c-900f-3f6b18605b29.png)


### STRUCTURE DIAGRAM


![STRUCTURE DIAGRAM](https://user-images.githubusercontent.com/88372627/161423856-f533b5ba-b01c-440c-9dbf-451b441a07fe.png)


### SEQUENCE DIAGRAM
![SEQUENCE DIAGRAM](https://user-images.githubusercontent.com/88372627/161424963-a7a5d972-4a64-486e-b656-540f012f046c.png)

## Test Plan

## Table no. High Level Test Plan


| Test ID    | Description                               | Exp I/P       | Exp O/P    | Actual Output | Type Of Test |
| :-------- | :---------------------------------------- | :------------ | :--------- | :------------- | :----------- |
| H_01       |  Is user able to get into the loginpage   | 0             | login page | login page    | Requirement based |
|H_02 | Is the user able to get into the main page | 1 | main page contents | main page contents | Requirement based |
|H_03 | Is the user able to do calculations | 1 | expected output | expected output | Input based |

### Login
![login](https://user-images.githubusercontent.com/88372627/161414026-5b1ac675-9cc6-4511-8cc4-6e1fae24142d.png)


### Menu

![menu](https://user-images.githubusercontent.com/88372627/161414038-3493260c-5e63-4cb9-8610-f053f417fa58.png)

### Calculate Bill

![calculate bill](https://user-images.githubusercontent.com/88372627/161414053-7ed39cb4-bf77-4ce8-8ccf-cd840c021a3d.png)




## Table no. Low Level Test Plan



| Test ID    | Description                               | Exp I/P       | Exp O/P    | Actual Output | Type Of Test |
| :-------- | :---------------------------------------- | :------------ | :--------- | :------------- | :----------- |
| L_01       |  Is the user able to get into the content   | 1-6            | menu page | menu page    | Requirement based |
|L_02 | Is the user able to search item  | y | items details | items details | Requirement based |
|L_03 | Is the user able to edit items | y | expected output | expected output | Input based |



 
### Search



![search](https://user-images.githubusercontent.com/88372627/161414109-f297954b-28f2-43a9-94da-c1478ad57c44.png)


### Edit





![edit](https://user-images.githubusercontent.com/88372627/161414113-eae27d4f-16b9-4e74-9d97-576046401307.png)



