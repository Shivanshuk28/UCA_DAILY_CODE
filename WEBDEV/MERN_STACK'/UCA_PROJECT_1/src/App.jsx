
import { createBrowserRouter, RouterProvider } from "react-router-dom"
import { Routes } from "./routes"
import Layout from "./components/layout/layout"
export default function App() {
  const router=createBrowserRouter(Routes)
  return (
    <>
      <Layout prop1="value1">
        <main>  
          <RouterProvider router={router}>
          </RouterProvider>
        </main> 
      </Layout>
    </>
  )
}
