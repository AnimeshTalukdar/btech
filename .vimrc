
let mapleader = "\<Space>"
" Vim configuration file "
" added by me
"inoremap " ""<left>
"inoremap ' ''<left>
"inoremap ( ()<left>
"inoremap [ []<left>
inoremap { {}<left>
"inoremap {<CR> {<CR><tab><left>
inoremap {<CR> {<CR>}<ESC>O
inoremap {;<CR> {<CR>};<ESC>O
"inoremap <silent> (<cr> (<cr>)<up><end><cr><tab>

inoremap <silent> {<cr> {<cr>}<up><end><cr><tab>

map <C-n> :Vexplore<CR>

inoremap <silent> <C-h> <left>
inoremap <silent> <C-j> <down>
inoremap <silent> <C-k> <up>
inoremap <silent> <C-l> <right>

map <leader>x <C-w>q


nnoremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l

autocmd FileType netrw nnoremap <buffer> <C-h> <C-w>h
autocmd FileType netrw nnoremap <buffer> <C-j> <C-w>j
autocmd FileType netrw nnoremap <buffer> <C-k> <C-w>k
autocmd FileType netrw nnoremap <buffer> <C-l> <C-w>l
autocmd FileType netrw nnoremap <buffer> <C-n> <C-w>q

autocmd InsertEnter * set cul
autocmd InsertLeave * set nocul

nnoremap <leader>fw :!grep -r ""<left>
nnoremap <leader>ff :!find . -name "**"<left><left>
nnoremap <leader>n :set invnu<CR>
nnoremap <leader>rn :rset invrnu<CR>
nnoremap <C-c> gg"+yG





"use system clipboard 
" copy and paste
vmap <C-c> "+yi
vmap <C-x> "+c
vmap <C-v> c<ESC>"+p
imap <C-v> <ESC>"+pa


" Set cursor shape to block in normal mode
" augroup CursorShape
    " autocmd!
    " autocmd InsertEnter * set guicursor=n-v-c:block-Cursor/lCursor
    " autocmd InsertLeave * set guicursor=n-v-c:ver25-Cursor/lCursor
" augroup END


" if has("gui_running")
"   " Set cursor shape to block in normal mode
"   let &t_ve = "\<Esc>[34h"
"   let &t_vi = "\<Esc>[34l"
" endif


autocmd FileType java map @b :!javac %; java `basename % .java`<CR>
autocmd FileType python map <buffer> @b :w<CR>:exec '!python3' shellescape(@%, 1)<CR>
autocmd FileType cpp map <buffer> @b :w<cr>:exec '!g++ -std=c++17 -O3' shellescape(@%, 1)<cr><cr>:!./a.out<cr>

autocmd FileType c map <buffer> @b :w<cr>:exec '!g++ -std=c++17 -O3' shellescape(@%, 1)<cr><cr>:!./a.out<cr>


" inoremap <silent> )<cr> )<cr><Del>
"autocmd FileType python map <buffer> <@b> :w<CR>:exec '!python3' shellescape(@%, 1)<CR>
autocmd filetype python inoremap :<cr> :<cr><tab>
" enable mouse support "
set mouse=a

" enable syntax "
syntax on

" enable line numbers "
set number

" highlight current line "
" set cursorline
" :highlight Cursorline cterm=bold ctermbg=black

" enable highlight search pattern "
set hlsearch

" enable smartcase search sensitivity "
set ignorecase
set smartcase

" Indentation using spaces "
" tabstop:	width of tab character
" softtabstop:	fine tunes the amount of whitespace to be added
" shiftwidth:	determines the amount of whitespace to add in normal mode
" expandtab:	when on use space instead of tab
" textwidth:	text wrap width
" autoindent:	autoindent in new line
set tabstop	=4
set softtabstop	=4
set shiftwidth	=4
"set textwidth	=79
set expandtab
set autoindent

" show the matching part of pairs [] {} and () "
set showmatch

" remove trailing whitespace from Python and Fortran files "
autocmd BufWritePre *.py :%s/\s\+$//e
autocmd BufWritePre *.f90 :%s/\s\+$//e
autocmd BufWritePre *.f95 :%s/\s\+$//e
autocmd BufWritePre *.for :%s/\s\+$//e

" enable color themes "
if !has('gui_running')
	set t_Co=256
endif
" enable true colors support "
" Vim colorscheme "
colorscheme desert

"-------------------------------------------------------------"
"Bonus. " Find & Replace (if you use the ignorecase, smartcase these are mandatory) "
"            :%s/<find>/<replace>/g   "replace global (e.g. :%s/mass/grass/g)"
"            :%s/<find>/<replace>/gc  "replace global with confirmation"
"            :%s/<find>/<replace>/gi  "replace global case insensitive"
"            :%s/<find>/<replace>/gI  "replace global case sensitive"
"            :%s/<find>/<replace>/gIc "replace global case sensitive with confirmation"

"        " Vim (book)marks "
"            mn     "replace n with a word A-Z or number 0-9"
"            :'n     "go to mark n"
"            :`.     "go to the last change"
"            :marks  "show all declared marks"
"            :delm n "delete mark n"

"        " Delete range selection "
"            :<line_number>,<line_number>d "(e.g. :2,10d deletes lines 2-10)"

"        " LaTeX shortcuts "
"            nnoremap <F1> :! pdflatex %<CR><CR>
"            nnoremap <F2> :! bibtex $(echo % \| sed 's/.tex$//') & disown<CR><CR>
"            nnoremap <F3> :! evince $(echo % \| sed 's/tex$/pdf/') & disown<CR><CR>
"            nnoremap <F4> :! rm *.log *.aux *.out *.blg & disown<CR><CR>

