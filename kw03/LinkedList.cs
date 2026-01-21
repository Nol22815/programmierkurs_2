using System.Drawing;
using System.Net.ServerSentEvents;
using System.Runtime.InteropServices;

namespace CustomLinkedList
{
    public class LinkedList<T>
    {
        Node? head = null;
        int Size = 0;

        public void AddFirst(T item)
        {
            if(head == null) head = new Node(item);
            else
            {
                Node tmp = new Node(item);
                tmp.Next = head;
                head = tmp;
            }
        }

        public void Remove(int index)
        {
            Node? help  = head;

            if(help == null)return;

            if (help.Equals(head))
            {
                head = head.Next; //Head entfernen
            }else
            {
                for(int i = 0; help.Next.Next != null && i < index; i++)
                {
                    help = help.Next;
                }
                if(help.Next.Next == null)//falls letztes elment gelöscht werden soll
                {
                   help.Next = null;
                }
                else //falls irgendein Element gelöscht werden soll
                {
                    help.Next = help.Next.Next;
                }
            }
            
        }

        public ListIterator GetIterator()
        {
            return new ListIterator(head);
        }
        public class Node
        {
            
            public T Item {get;}
             public Node? Next{get;set;}// ? bedeutet nullable

             public Node(T it){
                Item = it;
             }
        }

        public class ListIterator : Iterator<T>
        {
            private Node currentNode;

            public ListIterator(Node startNode)
            {
                currentNode = startNode;
            }

            public Boolean hasNext()
            {
                return currentNode != null;
            }

            public T Next()
            {
                Node help = currentNode;
                currentNode = currentNode.Next;
                return help.Item;
            }
        }
    }
}