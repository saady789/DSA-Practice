// int tour(petrolPump p[], int n) {
//   int totalPetrol = 0;
//   int totalDistance = 0;

//   for (int i = 0; i < n; i++) {
//       totalPetrol += p[i].petrol;
//       totalDistance += p[i].distance;
//   }

//   if (totalPetrol < totalDistance) {
//       // Impossible to complete the circuit
//       return -1;
//   }

//   int count = 0;
//   int front = 0;
//   int rear = 0;
//   int residue = 0;

//   while (count < n) {
//       if (p[rear].petrol + residue - p[rear].distance < 0) {
//           front = (rear + 1) % n;
//           rear = front;
//           count = 0;
//           residue = 0;
//       } else {
//           residue += p[rear].petrol - p[rear].distance;
//           rear = (rear + 1) % n;
//           count++;
//       }
//   }

//   return front;

// }