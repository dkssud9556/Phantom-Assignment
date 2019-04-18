var scanf = require('scanf');
let check = 1;

while(check) {
    console.log('도전자1 :');
    let challenger1 = scanf('%s');
    console.log('도전자2 :');
    let challenger2 = scanf('%s');
    if(challenger1 === challenger2) {
        console.log('무승부');
        console.log('다시 할거면 1, 안할거면 0');
        check = scanf('%d');
        continue;
    }
    else if(challenger1 === '가위') {
        if(challenger2 === '바위') {
            console.log('도전자2 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(challenger2 === '보자기') {
            console.log('도전자1 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
    else if(challenger1 === '바위') {
        if(challenger2 === '가위') {
            console.log('도전자1 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(challenger2 === '보자기') {
            console.log('도전자2 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
    else if(challenger1 === '보자기') {
        if(challenger2 === '가위') {
            console.log('도전자2 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
        else if(challenger2 === '바위') {
            console.log('도전자1 승');
            console.log('다시 할거면 1, 안할거면 0');
            check = scanf('%d');
            continue;
        }
    }
}