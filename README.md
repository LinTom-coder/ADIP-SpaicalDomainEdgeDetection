# ADIP-SpatialDomainEdgeDetection

This is an assignment from the **Advanced Digital Image Processing (ADIP)** course, focusing on the development and implementation of **spatial domain edge detection** techniques.  
The objective is to deepen the understanding of spatial filtering and enhance C programming skills through practical image processing tasks.

---

## 📌 Description

**Spatial domain edge detection** involves applying convolutional filters directly to pixel values to detect intensity changes that signify edges.

This project implements two common edge detection methods:

### 🔹 Sobel Filter
The **Sobel filter** computes gradients in the image and emphasizes regions with high spatial derivatives. It is commonly split into:
- **0-degree (horizontal)**: detects vertical edges
- **90-degree (vertical)**: detects horizontal edges

By combining both directions, it provides a robust approximation of edge magnitude and orientation.

### 🔹 Laplacian Filter
The **Laplacian filter** is a second-order derivative filter that detects regions of rapid intensity change. Unlike Sobel, it is rotation-invariant and responds equally to edges in all directions.  
It highlights edges by measuring how a pixel differs from its neighbors, often producing sharper and more symmetric edge maps. It is commonly split into **4-neighbor** and **8-neighbor**.

---

## 🖼️ Example Results

---

## 🛠️ Environment

- Language: C
- Input: Grayscale images
- Output: Edge-detected images using Sobel and Laplacian filters
