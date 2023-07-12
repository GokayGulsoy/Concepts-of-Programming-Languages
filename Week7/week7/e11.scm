#lang scheme

(define lists-compare?
  (lambda (compare l1 l2)
    (cond ((not (= (length l1) (length l2))) "Lenght sizes are different!")
          ((null? l1) #t)     
    (else
     (if (compare (car l1) (car l2))
         (lists-compare? compare (cdr l1) (cdr l2))
         #f)))))


(define list-<
  (lambda (l1 l2)
    (lists-compare? < l1 l2)))

(list-< '(1 2 3 4) '(2 3 4 5))
