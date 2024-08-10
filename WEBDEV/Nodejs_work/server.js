var express=require("express")
var app=express();
const port=3000;


app.use("/",express.static("./frontend"))

// app.get('/',(req,res)=>{
//     res.sendFile('C:/Users/Lenovo/Desktop/LEARNING2/UCA/WEBDEV/Nodejs_work/static/index.html')
// })


app.listen(port,()=>{
    console.log("LISTEING on port 3000");
})