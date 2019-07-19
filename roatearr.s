	.file	"roatearr.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter the size of array"
.LC1:
	.string	"%d"
.LC2:
	.string	"enter rotations"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	.cfi_offset 3, -56
	movq	%fs:40, %rax
	movq	%rax, -56(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -80(%rbp)
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-104(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -72(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movslq	%eax, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ecx
	movl	$0, %edx
	divq	%rcx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -64(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L2
.L3:
	movl	-84(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-64(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -84(%rbp)
.L2:
	movl	-104(%rbp), %eax
	cmpl	%eax, -84(%rbp)
	jl	.L3
	movl	$0, -100(%rbp)
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-100(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-100(%rbp), %eax
	movl	-104(%rbp), %ecx
	cltd
	idivl	%ecx
	movl	%edx, %eax
	movl	%eax, -100(%rbp)
	movl	$0, -88(%rbp)
	jmp	.L4
.L7:
	movl	-104(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-64(%rbp), %rax
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, -76(%rbp)
	movl	-104(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -92(%rbp)
	jmp	.L5
.L6:
	movl	-92(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-64(%rbp), %rax
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-64(%rbp), %rax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	subl	$1, -92(%rbp)
.L5:
	cmpl	$0, -92(%rbp)
	jg	.L6
	movq	-64(%rbp), %rax
	movl	-76(%rbp), %edx
	movl	%edx, (%rax)
	addl	$1, -88(%rbp)
.L4:
	movl	-100(%rbp), %eax
	cmpl	%eax, -88(%rbp)
	jl	.L7
	movl	$0, -96(%rbp)
	jmp	.L8
.L9:
	movq	-64(%rbp), %rax
	movl	-96(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -96(%rbp)
.L8:
	movl	-104(%rbp), %eax
	cmpl	%eax, -96(%rbp)
	jl	.L9
	movl	$0, %eax
	movq	%rbx, %rsp
	movq	-56(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
