// Print all prime numbers between 1 and N

function PrimeNo(No) {
    let i = 1;
    let iCount = 0;

    for (i = 1; i <= No; i++) {
        iCount = 0;
        for (let j = 1; j <= i; j++) {
            if (i % j == 0) {
                iCount++;
            }
        }
        if (iCount == 2) {
            console.log(i);
        }
    }
}

PrimeNo(18);