document.getElementById("hover-zion").addEventListener("mouseover", function() { this.src = "https://lh3.googleusercontent.com/gps-cs-s/AC9h4nqU52aWct96e_npjK0W52kz6kALR8gBFgmAR_m3sbQkFlbjtftGNiyzVH2TdoHBoy4IcvN8VuX7fu312tH5XXea3d90xY8dzMOLsdqA22So2gk8tpVTF4BGVBk4_RluOGjo5yBY=s680-w680-h510-rw"; });
 document.getElementById("hover-zion").addEventListener("mouseout", function() { this.src = "https://lh3.googleusercontent.com/gps-cs-s/AC9h4npqkMwnsnSsP8RC9ic59lrIF8ZFW7IXPsorortkqKLvLrGIrxxwMG2JLltb7YLCoOx_mIvRA_lztTXbZJyxYkRPNr3MvXUt9paKfaYAZwDJPC1skld-pJKwXBHINttJ7YpnWtTp=s680-w680-h510-rw"; }); 


function zion() {
    var x = document.getElementById("additional-text");
    var button = document.getElementById("btn");

    if (x.style.display === "none" || x.style.display === "") {
        x.style.display = "block";
        button.textContent = "Hide More About Zion";
    } else {
        x.style.display = "none";
        button.textContent = "Show More About Zion";
    }
}








