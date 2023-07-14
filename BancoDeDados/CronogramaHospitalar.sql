create database db_cronograma_hospitalar;

use db_cronograma_hospitalar;

create table tb_cronograma(
	id bigint auto_increment,
    nome_procedimento varchar(255),
    duracao_procedimento time,
    data_procedimento date,
    horario_procedimento time,
    
    primary key (id)	
);

create table tb_hospital(
	id bigint auto_increment,
    nome_hospital varchar(255),
    endereco varchar(255),
    cidade varchar(255),
    estado varchar(255),
    
    primary key (id)
);

create table tb_profissional(
	id bigint auto_increment,
    CRM int,
    nome_profissional varchar(255),
    profissao varchar(255),
    CPF varchar(255),
    RG varchar(255),
    cronograma_id bigint,
    hospital_id bigint,
    
	primary key (id),
    
    foreign key (cronograma_id) references tb_cronograma(id),
    foreign key (hospital_id) references tb_hospital(id)
);

insert into tb_cronograma(nome_procedimento,duracao_procedimento,data_procedimento,horario_procedimento)values("Pré natal","00:30:00","2023-02-20","13:00:00");
insert into tb_cronograma(nome_procedimento,duracao_procedimento,data_procedimento,horario_procedimento)values("Cirurgia","04:30:00","2023-02-09","07:00:00");
insert into tb_cronograma(nome_procedimento,duracao_procedimento,data_procedimento,horario_procedimento)values("Consulta","00:15:00","2023-02-06","15:30:00");

insert into tb_hospital(nome_hospital,endereco,cidade,estado)values("São Domingos","Rua Cinco","Virgem da Lapa","Minas Gerais");
insert into tb_hospital(nome_hospital,endereco,cidade,estado)values("São Vicente de Paulo","Rua Leão","Araçuaí","Minas Gerais");
insert into tb_hospital(nome_hospital,endereco,cidade,estado)values("Bom Samatitano","Rua do Sol","Teófilo Otoni","Minas Gerais");

insert into tb_profissional(CRM,nome_profissional,profissao,CPF,RG,cronograma_id,hospital_id)values(15236,"Marcelo","Clínico Geral","153.569.895-11","12.345.678-9",3,2);
insert into tb_profissional(CRM,nome_profissional,profissao,CPF,RG,cronograma_id,hospital_id)values(98564,"Jose","Cirurgião","174.549.785-71","17.855.656-7",2,1);
insert into tb_profissional(CRM,nome_profissional,profissao,CPF,RG,cronograma_id,hospital_id)values(87954,"Diana","Enfermeira","853.969.854-41","42.155.889-6",1,3);

select * from tb_cronograma;
select * from tb_hospital;
select * from tb_profissional;