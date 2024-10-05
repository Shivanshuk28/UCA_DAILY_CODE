import ProductList from "./components/home/ProductList"
import Signup  from "./components/signup/signup"
export const Routes = 
    [{
        path: "/",
        element: <ProductList></ProductList>

    },
    {
        path: "/signup",
        element: <Signup></Signup>
    }]
