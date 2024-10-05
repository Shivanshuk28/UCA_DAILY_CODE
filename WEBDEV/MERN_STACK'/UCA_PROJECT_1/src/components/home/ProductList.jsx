import { useState } from "react";
import { Link } from "react-router-dom";

function ProductList() {
    // var product =[];/
    var [product, setProduct] = useState([]);
    setTimeout(() => {
        setProduct([{name:"Product1 ", price: 20.00}
            ,{name:"Product2", price: 30.00},
            {name:"Product3", price: 40.00},
            {name:"Product4", price: 50.00},
            {name:"Product5", price: 60.00}
            ])
    }, 5000);

    return (
        <div>
            <table style={{border:'2px solid Black',borderCollapse:"collapse" }}>
                <thead >
                <tr>
                    <th style={{border:'2px solid Black'}}>Products</th>
                    <th style={{border:'2px solid Black'}}>Price</th>
                    <th style={{border:'2px solid Black'}}>Categories</th>
                    </tr>
                </thead>
                <tbody>
                    
                        {product.map((item,index)=>{
                            return (
                                <tr key={index}>
                                    <td style={{border:'2px solid Black'}}>{item.name}</td>
                                    <td style={{border:'2px solid Black'}}>{item.price}</td>
                                    <td style={{border:'2px solid Black'}}>Category 1</td>
                                </tr>
                            )
                        })}
                
                </tbody>
            </table>
            <Link to="/signup"><button>Signup</button></Link>
        </div>
    )
}
export default ProductList