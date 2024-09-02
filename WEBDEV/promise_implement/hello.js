//state -possible values
// - pending
//- fulfilled
// - rejected


//value -Possible values
// -undefined
// - return value or error

// function promiseExecutor(res,rej){
//     setTimeout(()=>{
//         res({response:"response value"})
//         console.log("INSIDE PROMISE EXECUTOR")
//     },10000)
// }
// var promise1=new Promise(promiseExecutor)
// promise1.then((value)=>{
//     responsevalue=value;
// })
function customPromiseExecutor(res,rej){
    setTimeout(()=>{
        res({response:"yeyeyeyeyeyeye value"})
        console.log("INSIDE PROMISE EXECUTOR")
    },10000)
}

function customPromise(executorFuncArg){
    this.state="pending";
    this.then=(arg1)=>{

    }
    executorFuncArg(
        (responseArg)=>{
            this.state="fulfilled"
            console.log("inside resolve finction",responseArg)
        },
        (errorArg)=>{

            this.state="rejected"
            console.error("inside eror function",errorArg)
        }
    );
    this.state="pending";
    let returnValue=undefined

}

var customPromise1= new customPromise(customPromiseExecutor)