// Generated by BUCKLESCRIPT VERSION 4.0.7, PLEASE EDIT WITH CARE
'use strict';


var igor = /* record */[
  /* age */33,
  /* name */"Igor",
  /* occupation */"Programmer"
];

igor[/* occupation */2] = "Tourist guide";

var igorRecord = /* record */[
  /* person */igor,
  /* id */1
];

var sasha = /* record */[
  /* age */31,
  /* name */"Sasha",
  /* occupation */"Kinda Programmer"
];

var igorNextYear = /* record */[
  /* age */igor[/* age */0] + 1 | 0,
  /* name */igor[/* name */1],
  /* occupation */igor[/* occupation */2]
];

function sayName(param) {
  return "" + (String(param[/* name */1]) + (" is a " + (String(param[/* age */0]) + " years old")));
}

var greeting = sayName(sasha);

console.log(greeting);

function getAge(entity) {
  return entity[/* age */0];
}

exports.igor = igor;
exports.igorRecord = igorRecord;
exports.sasha = sasha;
exports.igorNextYear = igorNextYear;
exports.sayName = sayName;
exports.greeting = greeting;
exports.getAge = getAge;
/*  Not a pure module */
