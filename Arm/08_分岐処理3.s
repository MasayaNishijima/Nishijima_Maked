.data
a:	.skip	400
b:	.skip	8

.text
.global	main
main:
	ldr	r1,	=a
	mov	r2,	#0
loop:
	cmp	r2,	#100
	beq	end
	add	r3,	r1,	r2,	LSL	#2
	str	r2,	[r3]
	add	r2,	r2,	#1
	b	loop
end:
	mov	r0,	#0
	bx	lr

