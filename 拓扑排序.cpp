#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX_NUM 20//最大顶点个数
#define VertexType int//顶点数据的类型
typedef struct ArcNode{
   int adjvex;
   struct ArcNode * nextarc;
}ArcNode;
typedef struct VNode{
   VertexType data;//数据域
   ArcNode * firstarc;//邻接点
}VNode,AdjList[MAX_VERTEX_NUM];//存储各链表头结点的数组
typedef struct {
   AdjList vertices;//图中顶点及各邻接点数组
   int vexnum,arcnum;//记录图中顶点数和边或弧数
}ALGraph;
//找到顶点对应在邻接表数组中的位置下标
int LocateVex(ALGraph G,VertexType u){
   for (int i=0; i<G.vexnum; i++) {
    if (G.vertices[i].data==u) {
     return i;
    }
   }return -1;
}
//创建 AOV 网，构建邻接表
void CreateAOV(ALGraph **G){
   *G=(ALGraph*)malloc(sizeof(ALGraph)); 
    scanf("%d,%d",&((*G)->vexnum),&((*G)->arcnum));
    for (int i=0; i<(*G)->vexnum; i++) {
     scanf("%d",&((*G)->vertices[i].data));
     (*G)->vertices[i].firstarc=NULL;
    }
     VertexType initial,end;
    for (int i=0; i<(*G)->arcnum; i++) { 
      scanf("%d,%d",&initial,&end);
       ArcNode *p=(ArcNode*)malloc(sizeof(ArcNode));
       p->adjvex=LocateVex(*(*G), end);
       p->nextarc=NULL;
       int locate=LocateVex(*(*G), initial);
       p->nextarc=(*G)->vertices[locate].firstarc;
    (*G)->vertices[locate].firstarc=p;
   }
}
//结构体定义栈结构
typedef struct stack{
    VertexType data; 
    struct stack * next;
}stack;
//初始化栈结构
void initStack(stack* *S){
(*S)=(stack*)malloc(sizeof(stack));
(*S)->next=NULL;
}
//判断链表是否为空
bool StackEmpty(stack S){
  if (S.next==NULL) { return true;
  }return false;
}
//进栈
void push(stack *S,VertexType u){
    stack *p=(stack*)malloc(sizeof(stack));
    p->data=u;
    p->next=NULL;
    p->next=S->next;
    S->next=p;
}

void pop(stack *S,VertexType *i)
{ 
   stack *p=S->next; 
   *i=p->data;
   S->next=S->next->next;
   free(p);
}
//统计各顶点的入度
void FindInDegree(ALGraph G,int indegree[]){
    for (int i=0; i<G.vexnum; i++) {
    indegree[i]=0;
   }
//遍历邻接表
   for (int i=0; i<G.vexnum; i++) {
    ArcNode *p=G.vertices[i].firstarc; 
    while (p) {
    indegree[p->adjvex]++;
    p=p->nextarc;
    }
}
}
void TopologicalSort(ALGraph G){
   int indegree[G.vexnum];
   FindInDegree(G,indegree);
//建立栈结构
   stack *S;
   initStack(&S);
   for (int i=0; i<G.vexnum; i++) {
    if (!indegree[i]) {
     push(S, i);
   }
  }
   int count=0;
//当栈为空，说明排序完成
   while (!StackEmpty(*S)) {
   int index;
   pop(S,&index);
   printf("%d",G.vertices[index].data);
   ++count;
   for (ArcNode *p=G.vertices[index].firstarc; p; p=p->nextarc) {
     VertexType k=p->adjvex;
     if (!(--indegree[k])) {
 //顶点入度为 0，入栈
      push(S, k);
    }
  }
 }
//如果 count 值小于顶点数量，表明该有向图有环
   if (count<G.vexnum) {
    printf("该图有回路"); return;
   }
}
int main(){
   ALGraph *G;
   CreateAOV(&G);//创建 AOV 网
   TopologicalSort(*G);//进行拓扑排序
   return 0;
}
