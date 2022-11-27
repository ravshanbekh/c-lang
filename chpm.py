# import the library pulp as p
import pulp as p

# Create a LP Minimization problem
Lp_prob = p.LpProblem('Problem', p.LpMaximize)

# Create problem Variables
x = p.LpVariable("x", lowBound = 0) # Create a variable x >= 0
y = p.LpVariable("y", lowBound = 0) # Create a variable y >= 0
z = p.LpVariable("z", lowBound = 0) # Create a variable z >= 0
# Objective Function
Lp_prob += 1500 * x + 1700 * y + 1400 * z

# Constraints:
Lp_prob += 17 * x + 15 * y + 10 * z <= 247
Lp_prob +=11 * x + 8 * y + 16 * z <= 218 
Lp_prob +=9 * x + 18 * y + 11 * z <= 181 

Lp_prob += x >= 0
Lp_prob += y >= 0
Lp_prob += z >= 0

# Display the problem
print(Lp_prob)

status = Lp_prob.solve() # Solver
print(p.LpStatus[status]) # The solution status

# Printing the final solution
print(p.value(x), p.value(y), p.value(z), p.value(Lp_prob.objective))
