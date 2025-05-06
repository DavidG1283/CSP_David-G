
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








