// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         // base case 
//         if(q.empty()) return q;

//         //processing + recursive calls 
//         int x = q.front();
//         q.pop();
//          q = rev(q);
//         q.push(x);
//         return q;
//     }
// };