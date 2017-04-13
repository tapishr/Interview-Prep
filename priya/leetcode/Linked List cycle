def hasCycle(self, head):
       if(head==None or head.next ==None):
           return False
       sp = head
       fp = head.next

       while fp != None and fp.next != None:
           if(sp ==fp):
               return True
           fp = fp.next.next
           sp = sp.next
       return False

# Question at : https://leetcode.com/problems/linked-list-cycle/#/description
