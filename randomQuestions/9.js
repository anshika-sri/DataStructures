var element = document.getElementById("button");

element.onclick = (function() {
    // init the count to 0
    var count = 0;

    return function(e) {
        //count
        count++;

        if (count === 3) {
            // do something every third time
            alert("Third time's the charm!");
            //reset counter
            count = 0;
        }
    };
})();
