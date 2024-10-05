import AHeader from "../../AHeader"
export default function Layout(props){
    console.log("the children si",props)  
    return (
        <>
            <header>
                <AHeader></AHeader>
            </header>
            {props.children}
            <footer></footer>
        </>
    )
}