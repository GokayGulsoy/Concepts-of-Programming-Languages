#lang scheme

(define list-<
  (lambda (l1 l2)
    (cond ((null? l1) #t)
    (else
     (if (< (car l1) (car l2))
         (list-< (cdr l1) (cdr l2))
         #f)))))

;(list-< '(1 2 3 4) '(2 3 4 5))