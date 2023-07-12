#lang scheme
(require compatibility/mlist)

;; naming lambda functions
;; as lambda1 and lambda2

(define lambda1 (lambda (n) (* n n)
         ))

(define lambda2 (
                 lambda display "I am a simple lambda function which prints to screen :)\n"))


;; Part-1) Representing the relationship
(define linkedChain (cons (cons (cons 3 (cons 1992
             (cons (cons
             (cons "Adil\n" "Burak\n") (list (cons "Hüseyin\n" "Samet\n") null "Dilek\n" "Altuğ\n"))
             (list "Cansu\n" "Ege\n" (cons (cons (cons 1923 "Güliz\n") "Nuri\n")
             (cons "Eren\n" (cons null
             lambda2)))
             (list "Didem\n" lambda2 (cons "Büşra\n" (cons "Serhat\n" (cons (cons (cons
             1923 "Güliz\n") "Nuri\n") (cons "Eren\n"
             (cons null lambda2
             )))))))))) (cons 3 (cons 1992
             (cons (cons
             (cons "Adil\n" "Burak\n")
             (list (cons "Hüseyin\n" "Samet\n") null "Dilek\n" "Altuğ\n"))
             (list "Cansu\n" "Ege\n" (cons (cons (cons 1923 "Güliz\n") "Nuri\n")
             (cons "Eren\n" (cons null
             lambda2)))
             (list "Didem\n" lambda1 (cons "Büşra\n" (cons "Serhat\n" (cons (cons (cons
             1923 "Güliz\n") "Nuri\n") (cons "Eren\n"
             (cons null lambda2 
             ))))))))))) (cons (cons 1992
             (cons (cons
             (cons "Adil\n" "Burak\n")
             (list (cons "Hüseyin\n" "Samet\n") null "Dilek\n" "Altuğ\n"))
             (list "Cansu\n" "Ege\n" (cons (cons (cons 1923 "Güliz\n") "Nuri\n")
             (cons "Eren\n" (cons null
             lambda2)))
             (list "Didem\n" lambda1 (cons "Büşra\n" (cons "Serhat\n" (cons (cons (cons
             1923 "Güliz\n") "Nuri\n") (cons "Eren\n"
             (cons null lambda2
             ))))))))) (cons (cons (cons (cons "Adil\n"  "Burak\n") (cons "Ersin\n" 7)) "Didem\n")
             lambda1))))
                                         
                                                                              
;; list that is used to check already
;; encountered items in linked chain
(define duplicate_checker (mlist 'begin))
                            
;; Part-2) myproc function
(define (myproc v1 v2 v3)
        (cond
          ((pair? v1) (myproc (cdr v1) v2 v3)
                      (myproc (car v1) v2 v3))

          ((and (list? v1) (not (null? v1))) (myproc (cdr v1) v2 v3))

          ((null? v1) null)

          ((and (string? v1) (not (mmember v1 duplicate_checker)))  (cond
                           ((not (v2 v1))   
                                           (mappend! duplicate_checker (mlist v1))
                                           (v3 v1)
                            
                          )))
          
          ((and (number? v1) (not (mmember v1 duplicate_checker)))  (cond
                          ((not (v2 v1))
                                         (mappend! duplicate_checker (mlist v1))
                                         (cond
                                             ((isprime? v1 2) (v3 v1 2)
                                                             (display "\n"))
                                       
                                           
                                         ))

                          ((v2 v1) 
                                   (mappend! duplicate_checker (mlist v1))
                                   (v3 v1) 
                                   (display "\n") 

                                   )))
                                          
          ((and (procedure? v1) (not (mmember v1 duplicate_checker))) (cond
                                ((not (v2 v1))
                                                  (mappend! duplicate_checker (mlist v1)) 
                                                  (v3 v1)
                                                  (display "\n"))
                                ))                      
        ))
       

;; predicate function to check
;; whether given number will be printed (passed as v2)
(define (isprinted? n)
        (cond
            ((number? n) #t)
            ((not (number? n)) #f)
        ))

;; predicate funtion to check whether given
;; parameter is number or not (passed as v2)
(define (isnumber? n)
        (cond
            ((not (number? n)) #t)
            ((number? n) #f)
         ))

;; functions to check whether
;; given number is prime or not and
;; display if it is a prime number (passed as v3)
(define (displayprime n step)
           (cond
                ((= n step) (display n))
                ((= 0 (modulo n step)) #f)
                (else
                    (displayprime n (+ 1 step))
           )))


(define (isprime? n step)
           (cond
                ((= n step) #t)
                ((= 0 (modulo n step)) #f)
                (else
                    (isprime? n (+ 1 step))
           )))

;; function to check whether length of
;; string is greater than 5
;; 6 for > than operator because of newline character (passed as v3)
(define (printlongerthanfive n)
        (cond
             ((and (string? n) (> (string-length n) 6)) (display n))
        ))

;; predicate function to check whether
;; given parameter is string or not (passed as v2)
(define (isstring? n)
        (cond
             ((string? n) #f)
             ((not (string? n)) #t)
        ))

;; predicate function to check whether
;; given parameter is procedure or not (passed as v2)
(define (isprocedure? n)
        (cond
            ((procedure? n) #f)
            ((not (procedure? n)) #t)
        ))


;; function that takes parameter as lambda
;; function to either compute 17 squared or display
; print result according to paramater (passed as v3)
(define (applylambda1 lambda_func)
               (cond
                    ((procedure? lambda_func) (display (lambda_func 17)))
               ))
             

;; Part-3) implementation of each bullet
(display "\nElements in linked chain in order:\n\n")
(myproc linkedChain isprinted? display)
;resetting duplicate_checker list before next operation
(set-mcdr! duplicate_checker (mlist ))
(display "\nAll prime numbers in the linked chain:\n\n")
(myproc linkedChain isnumber? displayprime) 
(set-mcdr! duplicate_checker (mlist ))
(display "\nStrings whose sizes are greater than 5:")
(myproc linkedChain isstring? printlongerthanfive)
(set-mcdr! duplicate_checker (mlist ))
(display "Calling lambda functions inside linkedChain:\n\n")
(myproc linkedChain isprocedure? applylambda1)


