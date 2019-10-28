set nocompatible              " be iMproved, required
filetype off                  " required
syntax on
set number
set laststatus=2

let g:airline_theme='papercolor'
map <silent> <C-b> :NERDTreeFocus<CR>
map <silent> <C-n> :NERDTreeToggle<CR>

" set the runtime path to include Vundle and initialize

set rtp+=~/.vim/bundle/Vundle.vim

set t_Co=256
" set background=dark
call vundle#begin()
colorscheme tequila-sunrise


"call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required


Plugin 'VundleVim/Vundle.vim'

Plugin 'scrooloose/nerdtree'

Plugin 'dracula/vim', { 'name': 'dracula' }

" All of your Plugins must be added before the following line

call vundle#end()            " required
filetype plugin indent on    " required

" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve "removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line

