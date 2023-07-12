#lang scheme
(define (fmember atm a_list)
	(cond
		((null? a_list) #f)
		((eq? atm (car a_list)) #t)
		(else (fmember atm (cdr a_list)))
	)
  )

(fmember 'B (list 'A 'B 'C)) 
(fmember 'B (list 'A 'C 'D 'E))