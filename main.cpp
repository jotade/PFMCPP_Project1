#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       car
//  action 1:   the car starts engine
car.startEngine();
//  action 2:   the car accelerates
car.accelerate();
//  action 3:   the car stops
car.stop(); 
//  2)
//  Noun:       person     
//  action 1:   the person walks
person.walk();  
//  action 2:   the person runs
person.run();
//  action 3:   the person sleeps
person.sleep(); 
//  3)
//  Noun:       horse
//  action 1:   the horse eats
horse.eat();
//  action 2:   the horse jumps
horse.jumps();
//  action 3:   the horse kicks
horse.kick(); 
//  4)
//  Noun:       mobile
//  action 1:   the mobile rings
mobile.rings();
//  action 2:   the mobile vibrates
mobile.vibrate();
//  action 3:   the mobile shows notification
mobile.showNotification(); 
//  5)
//  Noun:       camera
//  action 1:   the camera captures picture
camera.capturePicture();
//  action 2:   the camera records video
camera.recordVideo();
//  action 3:   the camera triggers flash
camera.triggerFlash();
//  6)
//  Noun:       dog
//  action 1:   the dog plays
dog.play();
//  action 2:   the dog barks  
dog.bark();
//  action 3:   the dog fetches the ball
dog.fetchBall(); 
//  7)
//  Noun:       chef
//  action 1:   the chef cooks 
chef.cook();
//  action 2:   the chef serves the plate
chef.servePlate();
//  action 3:   the chef chops
chef.chop(); 
//  8)
//  Noun:       aircraft
//  action 1:   the aircraft takes off
aircraft.takeOff();
//  action 2:   the aircraft climbs
aircraft.climb();
//  action 3:   the aircraft lands
aircraft.land(); 
//  9)
//  Noun:       radio
//  action 1:   the radio tunes station
radio.tuneStation();
//  action 2:   the radio saves station
radio.saveStation();
//  action 3:   the radio makes noise
radio.makeNoise(); 
//  10)
//  Noun:       fridge
//  action 1:   the fridge cools
fridge.cool();
//  action 2:   the fridge freeze
fridge.freeze();
//  action 3:   the makes ice 
fridge.makeIce(); 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
