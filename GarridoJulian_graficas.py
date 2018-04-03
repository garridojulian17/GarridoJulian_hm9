import numpy as np
import matplotlib.pyplot as plt 

A = np.loadtxt("times_python.csv")
B = np.loadtxt("times_cpp")

Ax = A[:,0]
Ay = A[:,1]
Bx = B[:,0]
By = B[:,1]


plt.plot(Ax,Ay)
plt.plot(Bx,By)
plt.savefig(cpp_vs_python.png)

