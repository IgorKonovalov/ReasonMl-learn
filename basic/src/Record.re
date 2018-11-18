/* records and types*/

/* always define type of record before actual record creation */
type person = {
  age: int,
  name: string,
  occupation: string
}

/* record can be a part of another */
type dataPerson = {
  person,
  id: int
}

let igor = {
  age: 33,
  name: "Igor",
  occupation: "Programmer"
}

let igorRecord = {
  person: igor,
  id: 1
}

let sasha = {
  age: 31,
  name: "Sasha",
  occupation: "Kinda Programmer"
}
/* can destruct other records into a new ones */
let igorNextYear = {
  ...igor,
  age: igor.age + 1,
}

/* look, here is a function for strings concatenation and destructuring wow */
let sayName = ({ name, age }) => {j|$name is a $age years old|j}


let greeting = sayName(sasha)

Js.log(greeting)

