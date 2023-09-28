from collections import deque

def measure_water():
    jugs = [2, 3, 5, 8]
    target = 4

    visited = set()
    queue = deque([(0, 0, 0, 0, "")])  # (jug1, jug2, jug3, jug4, sequence_of_steps)

    while queue:
        jug1, jug2, jug3, jug4, steps = queue.popleft()

        if jug1 == target:
            print("Sequence of steps to measure 4 liters:")
            print(steps)
            break

        # Try all possible operations
        for i in range(4):
            new_state = [jug1, jug2, jug3, jug4]
            if i == 0:  # Fill a jug
                if new_state[i] < jugs[i]:
                    new_state[i] = jugs[i]
                    new_steps = steps + f"Fill {jugs[i]}L jug, "
            elif i == 1:  # Empty a jug
                if new_state[i] > 0:
                    new_state[i] = 0
                    new_steps = steps + f"Empty {jugs[i]}L jug, "
            elif i == 2:  # Pour water from one jug to another
                for j in range(4):
                    if j != i and new_state[i] > 0 and new_state[j] < jugs[j]:
                        poured = min(new_state[i], jugs[j] - new_state[j])
                        new_state[i] -= poured
                        new_state[j] += poured
                        new_steps = steps + f"Pour {poured}L from {jugs[i]}L jug to {jugs[j]}L jug, "
            elif i == 3:  # Pour water from jug 3 to jug 4
                if new_state[2] > 0 and new_state[3] < jugs[3]:
                    poured = min(new_state[2], jugs[3] - new_state[3])
                    new_state[2] -= poured
                    new_state[3] += poured
                    new_steps = steps + f"Pour {poured}L from {jugs[2]}L jug to {jugs[3]}L jug, "
           
            new_state = tuple(new_state)
            if new_state not in visited:
                visited.add(new_state)
                queue.append((new_state[0], new_state[1], new_state[2], new_state[3], new_steps))

if __name__ == "__main__":
    measure_water()
